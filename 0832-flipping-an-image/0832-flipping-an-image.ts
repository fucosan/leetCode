function flipAndInvertImage(image: number[][]): number[][] {
    const n: number = image.length;
    for (let i = 0; i < n; i++) {
        image[i].reverse();
        for (let j = 0; j < n; j++) {
            image[i][j] ^= 1;
        }
    }
    return image;
};