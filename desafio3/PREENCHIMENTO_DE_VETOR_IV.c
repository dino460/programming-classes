#include <stdio.h>

int main(void) {
  int x, y, par[5], impar[5], a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
  x = 0;
  y = 0;
  scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o);
  int v3[15] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o};

  for (int z = 0; z < 15; z++) {
    if (v3[z] % 2 == 0) {

      if (x <= 5) {
      par[x] = v3[z];
      x++;

      } else {
        for (int r = 0; r < 5; r++) {
          printf("par[%i] = %i\n", r, par[r]);
        }

        x = 0;
        par[x] = v3[z];
        x++;
      }

    } else {

      if (y <= 5) {
      impar[y] = v3[z];
      y++;

      } else {
        for (int s = 0; s < 5; s++) {
          printf("impar[%i] = %i\n", s, impar[s]);
        }
        y = 0;
        impar[y] = v3[z];
        y++;
      }
    }
  }
  for (int t = 0; t < y; t++) {
          printf("impar[%i] = %i\n", t, impar[t]);
        }
  for (int u = 0; u < x; u++) {
          printf("par[%i] = %i\n", u, par[u]);
        }

  return 0;
}