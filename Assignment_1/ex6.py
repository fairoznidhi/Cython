def isLandscape(width,height):
    if width>height:
        return "Landscape"
    else:
        return "Potrait"

width=input("Width:")
height=input("Height:")
print(isLandscape(width,height))
