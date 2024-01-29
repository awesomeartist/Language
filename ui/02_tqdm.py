import time
from tqdm import tqdm
from tqdm import trange

#method1
text = ''
for char in tqdm(['a', 'b', 'c', 'd'],'demo1'):
    time.sleep(0.25)
    text = text + char

print(text)

#method2
for it in tqdm(range(10),desc='demo2'):
    time.sleep(0.2)

#method3
for i in trange(100,desc='demo3'):
    time.sleep(0.01)


#method4
with tqdm(total=100,desc='demo4') as pbar:
    for i in range(10):
        time.sleep(0.1)
        pbar.update(10)


#method5
pbar = tqdm(total=100,desc='demo5')
for i in range(10):
    time.sleep(0.1)
    pbar.update(10)
pbar.close()

