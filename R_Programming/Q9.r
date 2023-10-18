# Function to perform run-length encoding
run_length_encoding <- function(input_string) {
  compressed_string <- ""
  current_char <- substr(input_string, 1, 1)
  char_count <- 1
  
  for (i in 2:nchar(input_string)) {
    if (substr(input_string, i, i) == current_char) {
      char_count <- char_count + 1
    } else {
      compressed_string <- paste(compressed_string, current_char, char_count, sep = "")
      current_char <- substr(input_string, i, i)
      char_count <- 1
    }
  }
  
  # Add the last character and its count
  compressed_string <- paste(compressed_string, current_char, char_count, sep = "")
  
  return(compressed_string)
}

# Read input string from user
input_string <- readline("Enter the string to compress: ")

# Perform run-length encoding
compressed_result <- run_length_encoding(input_string)

# Print compressed string
cat("Compressed string:", compressed_result, "\n")