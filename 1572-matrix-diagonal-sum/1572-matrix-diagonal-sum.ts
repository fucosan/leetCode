function diagonalSum(mat: number[][]): number {
    const n: number = mat.length;
    let dl: number = 0;
    let dr: number = n - 1;
    let half: number = Math.floor(n / 2);
    let sum: number = n % 2 == 0 ? 0: mat[half][half] * -1;
    for (let i = 0; i < n; i++) {
        sum += mat[i][dl++];
        sum += mat[i][dr--];
    }
    return sum;
};