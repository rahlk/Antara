static void NumofPaths(int n) {
        int[][] array = new int[n][n];
        for (int i = 0; i &lt; n; i++) {
            array[0][i] = 1;
            array[i][0] = 1;
        }

        for (int i = 1; i &lt; n; i++) {
            for (int j = i; j &lt; n; j++) {
                array[i][j] = array[i-1][j] + array[i][j-1];
                array[j][i] = array[j-1][i] + array[j][i-1];
            }
        }
        System.out.println(array[n - 1][n - 1]);
    }