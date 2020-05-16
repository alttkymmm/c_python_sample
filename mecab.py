import MeCab

test_str = "えたいの知れない不吉な塊が私の心を始終圧えつけていた"
chasen = MeCab.Tagger("-Ochasen")
print(chasen.parse(test_str))
