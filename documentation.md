 # h1 Heading
 ## h2 heading
 ...
 ###### h6 heading
 
 
 **bold text**
 
 *italic text*
 
 ***bold and italic text***
 
 Normal text
 
 ## ***Functions*** ##
 #### This Documents the Purpose of every function ####
 
 animationClockwise - Has 18 frames and 324 Lights per frame. It animates a clockwise movement of a face
 
 animationCounterClockwise - Has 18 frames and 324 lights per frame. It animates a counter clockwise movement of the face
 
 edgeAnimationClockwise - Has 19 frames of 4 edges with 18 lights per edge. It animates an edge of the cube turning clockwise
 
 edgeAnimationCounterClockwise - Has 19 frames of 4 edges with 18 lights per edge. It animates an edge of the cube turning counter clockwise
 
 setPanelColor - Has a face object, a PanelNum to know which Panel to change, and the color to change it to. 
 
 showFace - sets the colors of the faces, the color depends on the face .
 
 showCubeState - takes in cubeState and pushes it out to the cube.
 
 fillPanelColor - takes in a face and a color. Goes through and changes each panel to the input color until the entire face is that color
 
 setPattern - Takes in Neopixel object pobyteer, number of panel to change, a matrix value, a color for a '1' value, and a color for a '2' value. Shows a 6x6 pattern on one panel of a face.
 
 fillPattern - Takes in Neopixel object pobyteer, a matrix value, a color for a '1' value, and a color for a '2' value. Shows a 6x6 pattern on all 9 panels of a face.
 
 Wheel - Input a value 0 to 255 to get a color value. Makes it eaiser to make a rainbow with a loop
 
 turnFaceClockwise - takes in cubeState and the face to be turned. This function turns one face of a matrix clockwise, by the end of this function, the cubeState variable should contain an altered matrix. This function also effects the edges 
 
 turnFaceCounterClockwise - takes in cubeState and the face to be turned. This function turns one face of a matrix counter clockwise, by the end of this function, the cubeState variable should contain an altered matrix. This function also effects the edges
 
 displayCubeNotationAnimation - takes in the cubeState and a string pointer. Allows for the movement of the cube through cube notatation 
 
 showAnimation
 
 
 ## ***Variables*** ##
 #### This Documents the Purpose of every Variable ####
 
 cubeState = holds the State of the cube as 6 3*3 matrixs
