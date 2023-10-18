# Input paragraph from the user
user_input_paragraph <- readline("Enter the paragraph you want to process: ")
word_to_replace <- readline("Enter the word you want to replace: ")
replacement_word <- readline("Enter the word to replace with: ")

# Print the user's input paragraph
print(paste("You entered the following paragraph:", user_input_paragraph))

# Split the paragraph into individual words
words_in_paragraph <- strsplit(user_input_paragraph, " +")[[1]]
print(paste("Total number of words in the paragraph:", length(words_in_paragraph)))

# Initialize variables for the longest word
longest_word_length <- 0
longest_word <- ""
total_character_count <- 0

# Find the longest word and calculate the total character count
for (word in words_in_paragraph) {
  total_character_count <- total_character_count + nchar(word)
  if (nchar(word) > longest_word_length) {
    longest_word <- word
    longest_word_length <- nchar(word)
  }
}

# Replace the specified word in the paragraph
replaced_paragraph <- gsub(word_to_replace, replacement_word, words_in_paragraph)

# Print the paragraph with the word replaced
print(paste("Revised paragraph:", paste(replaced_paragraph, collapse = " ")))

# Calculate and print the average word length
average_word_length <- total_character_count / length(words_in_paragraph)
print(paste("The average word length in the paragraph is:", average_word_length))

# Print the longest word in the paragraph and its length
print(paste("The longest word in the paragraph is:", longest_word, "with a length of", longest_word_length))
