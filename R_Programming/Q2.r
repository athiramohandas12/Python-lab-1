encrypt_char <- function(char, shift) {
  if (char %in% letters) {
    encrypted_char <- intToUtf8((utf8ToInt(char) + shift - utf8ToInt("a")) %% 26 + utf8ToInt("a"))
  } else if (char %in% LETTERS) {
    encrypted_char <- intToUtf8((utf8ToInt(char) + shift - utf8ToInt("A")) %% 26 + utf8ToInt("A"))
  } else {
    encrypted_char <- char
  }
  return(encrypted_char)
}



# Read sentence and shift value from user
sentence <- readline("Enter a sentence: ")
shift <- as.integer(readline("Enter the shift value: "))

# Encrypt the sentence
encrypted_sentence <- sapply(strsplit(sentence, NULL), encrypt_char, shift = shift)
encrypted_sentence <- paste(encrypted_sentence, collapse = "")

# Print the encrypted sentence
cat("Encrypted sentence:", encrypted_sentence, "\n")