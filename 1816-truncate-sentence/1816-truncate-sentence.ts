function truncateSentence(s: string, k: number): string {
    let cnt: number = 0;
    const n: number = s.length;
    let words: string = '';
    let word: string = '';
    for(let i = 0; i < n; i++) {
        if (cnt == k) break;
        if (s[i] == ' ') {
            cnt++;
            words += word + (cnt < k ? ' ': '');
            word = '';
        } else {
            word += s[i];
        }
    };
    if (word.length > 0) {
        words += word;
    }
    return words;
};