from deepface import DeepFace
from PIL import Image
import cv2
import matplotlib.pyplot as plt
import glob
import os
h=0
s=0
m=0
f=0
img_dir = r"D:\AL lab\images" 
data_path = os.path.join(img_dir,'*.jpg') 
files = glob.glob(data_path) 
data = [] 
for f1 in files:
 
    img = cv2.imread(f1)
    plt.imshow(img[:, :, ::-1])
    image = Image.open(f1)
    image.show()
    data.append(img)
    demography = DeepFace.analyze(img)
    print("Emotion: ", demography["dominant_emotion"])
    if demography["dominant_emotion"]=="happy":
        h=h+1
    else:
        s=s+1
    print("Gender: ", demography["gender"])
    if demography["gender"]=="Man":
        m=m+1
    else:
        f=f+1
print("Total Number of people:",m+f)
print("Total Number of male:",m)
print("Total Number of female:",f)
print("Total Happy Customers are:",h)
print("Total Sad Customers are:",s)
