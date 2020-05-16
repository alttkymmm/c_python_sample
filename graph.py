import numpy as np
import matplotlib.pyplot as plt

# X軸とY軸の計算
X = np.linspace(-np.pi, np.pi, 20)
Y1, Y2 = np.cos(X), np.sin(X)

# プロットする
plt.plot(X, Y1, label="cos")
plt.scatter(X, Y2, label="sin")

# 凡例をつける
plt.legend()

# 保存する
plt.savefig("graph.png")

# 表示する
plt.show()
