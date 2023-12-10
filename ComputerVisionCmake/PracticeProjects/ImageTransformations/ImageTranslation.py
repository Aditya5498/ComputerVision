import numpy as np
import cv2 as cv

img = cv.imread("../SampleImages/simpleImage1.jpeg", 0)

rows,cols = img.shape

M = np.float32([[1,0,100], [0,1,50]])

dst = cv.warpAffine(img, M, (cols,rows))

cv.imshow("Initial Image",img)

cv.imshow("Final Image",dst)
cv.waitKey(0)
cv.destroyAllWindows()

