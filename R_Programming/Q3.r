# Define a Student class
Student <- setRefClass("Student",
                       fields = list(
                         name = "character",
                         age = "integer",
                         grade = "character"
                       ),
                       methods = list(
                         initialize = function(name, age, grade) {
                           if (is.numeric(age) && age > 0 &&
                               grade %in% c("A", "B", "C", "D", "F")) {
                             name <<- name
                             age <<- age
                             grade <<- grade
                           } else {
                             stop("Invalid student record")
                           }
                         }
                       )
)

# Create a list to store valid student objects
valid_students <- list()

# Read student records and perform validation
while (TRUE) {
  name <- readline("Enter student name (or 'quit' to exit): ")
  if (tolower(name) == "quit") {
    break
  }
  age <- as.integer(readline("Enter student age: "))
  grade <- readline("Enter student grade (A, B, C, D, F): ")
  
  student <- Student$new(name, age, grade)
  valid_students <- c(valid_students, student)
}

# Calculate and display the average age of valid students
if (length(valid_students) > 0) {
  valid_ages <- sapply(valid_students@ref, function(x) x$age)
  average_age <- mean(valid_ages)
  cat("Average age of valid students: ", round(average_age, 2), "\n")
} else {
  cat("No valid student records entered.\n")
}