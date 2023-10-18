check_palindrome <- function(input_string){
  string_split <- strsplit(input_string, NULL)[[1]]
  reverse_word = rev(string_split)
  reversed_word <- paste(reverse_word, collapse = "")
  if (input_string == reversed_word){
    return (TRUE)
  }
  return (FALSE)
}

input_string <- readline(prompt="Input your string: ")
palindrome <- check_palindrome(input_string)
print(palindrome)
if (palindrome){
  print('Its Palindrome')
} else {
  print("Not Palindrome")
}