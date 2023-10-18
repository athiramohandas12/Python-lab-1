# Function to generate a random password
generate_password <- function(length) {
  uppercase_letters <- LETTERS
  lowercase_letters <- letters
  digits <- 0:9
  special_characters <- c('!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '[', ']', '{', '}', '|', ';', ':', ',', '.', '<', '>')
  
  all_characters <- c(uppercase_letters, lowercase_letters, as.character(digits), special_characters)
  
  if (length < 4) {
    cat("Password length must be at least 4 characters.\n")
    return(NULL)
  }
  
  password <- c(sample(uppercase_letters, 1),
                sample(lowercase_letters, 1),
                sample(digits, 1),
                sample(special_characters, 1))
  
  remaining_length <- length - 4
  
  for (i in 1:remaining_length) {
    password <- c(password, sample(all_characters, 1))
  }
  
  password <- paste(sample(password), collapse = '')
  return(password)
}

# Get user input for the desired password length
while (TRUE) {
  password_length <- as.integer(readline("Enter the desired password length: "))
  
  if (!is.na(password_length)) {
    break
  }
  
  cat("Please enter a valid integer for password length.\n")
}

generated_password <- generate_password(password_length)

if (!is.null(generated_password)) {
  cat("Generated Password: ", generated_password, "\n")
}