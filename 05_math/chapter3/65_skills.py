import pandas as pd
import numpy as np
import io

data = '''
Area    Africa  Asia    Europe  N_America   S_America   Australia   Antarctica
Y1961   -0.17   0.49    8.74    0.17    1.16    1.51    2.80
Y1962   -0.40   -0.08   3.00    -0.58   -1.39   1.23    -2.27
Y1963   0.64    2.66    1.03    3.72    1.39    -1.14   1.35
Y1964   -1.53   -1.66   -5.23   -2.85   -2.17   -0.22   -3.66
Y1965   -1.97   -0.33   -4.30   -5.94   -0.15   1.27    -0.99
'''

df = pd.read_csv(io.StringIO(data), delim_whitespace=True)

import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
# from matplotlib.animation import PillowWriter

idx = df.columns[1:].tolist()
colors = ['m','g','c','k','y']

fig = plt.figure()
ax = plt.axes(xlim=(0,6), ylim=(-10, 10))
# ax.set_xticklabels(idx, rotation=30)
    
def animate(i):
    ax.cla()
    ax.bar(idx, df.iloc[i,1:], color=colors)
    ax.set_ylim(-10, 10)
    return fig,

anim = FuncAnimation(fig, animate, frames=5, interval=200, repeat=False)
plt.show()
# anim.save('bar_ani.gif', writer='pillow')