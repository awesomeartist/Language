

import random
import matplotlib.cm as cm
import matplotlib.pyplot as plt

x0, x1 = -2.5, 1
y0, y1 = -1, 1

def initialize_image(x_p, y_p):
    image = []
    for i in range(y_p):
        x_color = []
        for j in range(x_p):
            x_color.append(0)
        image.append(x_color)
    return image


def mandelbrot_image():

    x_p = 400
    y_p = 400
    max_iteration = 1000

    dx = (x1 - x0)/(x_p-1)
    dy = (y1 - y0)/(y_p-1)
    x_coords = [x0 + i*dx for i in range(x_p)]
    y_coords = [y0 + i*dy for i in range(y_p)]
    
    image = initialize_image(x_p, y_p)

    for idx_x, x in enumerate(x_coords):
        for idx_y, y in enumerate(y_coords):
            z1 = complex(0, 0)
            c = complex(x, y)

# my snippet
            for iteration in range(max_iteration):
                z1 = z1**2 + c
                if abs(z1) < 2 and iteration < max_iteration - 1:
                    continue
                else:
                    image[idx_y][idx_x] = iteration
                    break

# solution snippet
            # iteration = 0
            # while (abs(z1) < 2  and iteration < max_iteration):
            #     z1 = z1**2 + c
            #     iteration += 1
            # image[idx_y][idx_x] = iteration


    plt.imshow(image, origin='lower', extent=(-2.5, 1, -1, 1),
               cmap=cm.Greys_r, interpolation='nearest')
    plt.colorbar()
    plt.show()

if __name__ == '__main__':
    mandelbrot_image()