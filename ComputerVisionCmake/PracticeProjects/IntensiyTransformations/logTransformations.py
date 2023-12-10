import cv2 as cv
import numpy as np

img = cv.imread("../SampleImages/simpleImage1.jpeg")

#log transformation
c = 255/(np.log(1 + np.max(img))) 
log_transformed = c * np.log(1 + img)

log_transformation = np.array(log_transformed, dtype = np.uint8)

cv.imshow("Initial Image",img)

cv.imshow("Final Image",log_transformation)
cv.waitKey(0)
cv.destroyAllWindows()