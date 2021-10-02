if __name__ == "__main__":
    n = int(input())
    kalimat = [None] * n

    for i in range(0, len(kalimat)):
        kalimat[i] = str(input())

    for i in range(0, len(kalimat)):
        split_sentence = list(kalimat[i])
        for k in range(0, len(split_sentence)):
            if (split_sentence[k] == ">"):
                split_sentence[k] = ""
                if (k != (len(split_sentence) - 1)):
                    split_sentence[k+1] = split_sentence[k+1].upper()

            if (split_sentence[k] == "<"):
                split_sentence[k] = ""
                if (k != (len(split_sentence) - 1)):
                    split_sentence[k+1] = split_sentence[k+1].lower()

        kalimat[i] = "".join(split_sentence)

    for j in range(0, len(kalimat)):
        print(kalimat[j])
