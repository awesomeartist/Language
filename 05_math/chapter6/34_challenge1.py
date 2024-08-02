

import random
import matplotlib.cm as cm
import matplotlib.pyplot as plt


def initialize_image(x_p, y_p):
    image = []
    for i in range(y_p):
        x_color = []
        for j in range(x_p):
            x_color.append(0)
        image.append(x_color)
    return image

def color_points():
    x_p = 6
    y_p = 6
    image = initialize_image(x_p, y_p)
    for i in range(y_p):
        for j in range(x_p):
            image[i][j] = random.randint(0, 10)
    plt.imshow(image, origin='lower', extent=(0, 5, 0, 5),
               cmap=cm.Greys_r, interpolation='nearest')
    plt.colorbar()
    plt.show()

if __name__ == '__main__':
    color_points()