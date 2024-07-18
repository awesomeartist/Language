import numpy as np
import matplotlib.pyplot as plt
import mpl_toolkits.axisartist as axisartist

fig = plt.figure('Sine Wave', (10,8))

ax = axisartist.Subplot(fig, 1,1,1)
fig.add_axes(ax)

ax.axis[:].set_visible(False)

ax.axis["x"] = ax.new_floating_axis(0, 0)
ax.axis["y"] = ax.new_floating_axis(1, 0)
ax.axis["x"].set_axis_direction('top')
ax.axis["y"].set_axis_direction('left')
ax.axis["x"].set_axisline_style("->", size = 2.0)
ax.axis["y"].set_axisline_style("->", size = 2.0)

t = np.linspace(0, 1*np.pi)
y = 2*np.sin(2*t)
ax.plot(t, y, color = 'red', linewidth = 2)
plt.title('y = 2sin(2t)',fontsize = 14, pad = 20)

ax.set_xticks(np.linspace(0.25,1.5,6)*np.pi)
ax.set_xticklabels(['$\\frac{\pi}{4}$','$\\frac{\pi}{2}$', '$\\frac{3\pi}{4}$', '$\pi$', '$\\frac{5\pi}{4}$', '$\\frac{3\pi}{2}$'])
ax.set_yticks([0, 1, 2])

ax.set_xlim(-0.5*np.pi,1.5*np.pi)
ax.set_ylim(-2.2, 2.2)

plt.show()
