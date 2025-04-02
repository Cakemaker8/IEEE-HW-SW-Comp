import serial
import time
import pygame

pygame.init()

pygame.display.set_caption('2024 IEEE Competition')
#pygame.display.set_icon(Icon_name)  # NEEDS CHANGED
displaySurf = pygame.display.set_mode((1000, 800))

black = (0, 0, 0)
white = (255, 255, 255)
colorThingy = (200, 125, 0)
font = pygame.font.Font(None, 32)

titleText = font.render('2024 IEEE Competition', False, white)
titleTextRect = titleText.get_rect()
titleTextRect.center = (500, 100)

descriptionText = font.render('Please select what you want to do', False, white)
descriptionTextRect = descriptionText.get_rect()
descriptionTextRect.center = (500, 175)

while True:  
    displaySurf.fill(black)
    displaySurf.blit(titleText, titleTextRect)
    displaySurf.blit(descriptionText, descriptionTextRect)
    pygame.draw.rect(displaySurf, white, [300, 275, 400, 50], 0)
    pygame.draw.rect(displaySurf, white, [300, 575, 400, 50], 0)
    pygame.draw.rect(displaySurf, white, [275, 300, 50, 300], 0)
    pygame.draw.rect(displaySurf, white, [675, 300, 50, 300], 0)
    pygame.draw.circle(displaySurf, white, [300, 300], 50, 0)
    pygame.draw.circle(displaySurf, white, [300, 600], 50, 0)
    pygame.draw.circle(displaySurf, white, [700, 300], 50, 0)
    pygame.draw.circle(displaySurf, white, [700, 600], 50, 0)

    mouse = pygame.mouse.get_pos()

    for event in pygame.event.get():  
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
    pygame.display.update()





# Sending:
# 1 does 49 (ped)
# 2 does 50 (ped)
# 3 does 51 (ped)
# 4 does 52 (ped)
# 5 does day mode ISSUES
# 6 does night mode ISSUES
# 7 does normal mode
# 8 does fast mode
# 9 does slow mode

# arduino = serial.Serial(port='COM4', baudrate=9600) 

# while True:
#     time.sleep(2)

#     inputUser = input()
#     arduino.write(inputUser.encode())

#     time.sleep(2)
#     print(arduino.readline().decode('utf-8').rstrip())