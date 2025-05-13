/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1992                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: klm4416 <boj.kr/u/klm4416>                  +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1992                           #+#        #+#      #+#    */
/*   Solved: 2025/05/12 16:33:14 by klm4416       ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    private static char[][] video;
    private static StringBuilder sb = new StringBuilder();

    private static void quad(int x, int y, int size) {
        char first=video[x][y];
        boolean same = true;

        outer:
        for (int i = x; i < x + size; i++) {
            for (int j = y; j < y +size; j++) {
                if (video[i][j] != first) {
                    same = false;
                    break outer;
                }
            }
        }

        if (same) {
            sb.append(first);
            return;
        }

        int half = size / 2;
        sb.append('(');

        quad(x, y, half);
        quad(x, y+half, half);
        quad(x+half, y, half);
        quad(x+half, y+half, half);
        
        sb.append(')');
    }



    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        video = new char[N][N];

        for (int i = 0; i<N; i++) {
            video[i] = br.readLine().toCharArray();
        }

        quad(0, 0, N);

        System.out.println(sb.toString());
    }
}

