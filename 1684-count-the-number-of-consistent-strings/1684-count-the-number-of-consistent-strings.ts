function countConsistentStrings(allowed: string, words: string[]): number {
    let lk: number[] = [];
    for (let i = 0; i < 26; i++) {
        lk.push(0);
    }
    for (let i = 0; i < allowed.length; i++) {
        lk[allowed[i].charCodeAt(0) - 97]++;
    }
    let ans: number = 0;
    for (let i = 0; i < words.length; i++) {
        let word = words[i];
        let flag = true;
        for (let j = 0; j < word.length; j++) {
            if (lk[word[j].charCodeAt(0) - 97] == 0) {
                flag = false;
                break;
            }
        }
        if (flag) ans++;
    }
    return ans;
};