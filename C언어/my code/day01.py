

yesterday_lyric= "Oh, I believe in yesterday"


contents=""
for line in yesterday_lyric:
        contents=contents+line.strip()

print(contents)
n_of_yesterday=contents.upper().count("YESTERDAY")
print("Number of a Word 'Yesterday':", n_of_yesterday)

