#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes
//Best team
int main()
{
	int x, y;
	//Create Input and Output objects to test
	Output* pOut = new Output();
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;
	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);


	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Square Test ///
	/// ============== 
	pOut->PrintMessage("Drawing a Square, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	//******************************************************
	pOut->PrintMessage("Drawing a Square ==>non-filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = false;//Figure is filled
	pOut->DrawSQ(P1, gfxInfo, false);
	//******************************************************
	pOut->PrintMessage("Drawing a Square ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawSQ(P1, gfxInfo, true);
	//******************************************************
	pOut->PrintMessage("Drawing a Square ==> filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawSQ(P1, gfxInfo, false);
	//******************************************************
	pOut->PrintMessage("Drawing a Square ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawSQ(P1, gfxInfo, true);
	///TODO: Add code to draw Square, Normal and Highlighted

	pOut->PrintMessage("Drawing a Square Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawTri(P1, P2, P3, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTri(P1, P2, P3, gfxInfo, true);


	// 2.1.3 - Drawing a filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> filled,  Click three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);
	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTri(P1, P2, P3, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTri(P1, P2, P3, gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();


	/// 2.4- Circle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing an Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	// 2.1.1 - Drawing non-filled circle
	pOut->PrintMessage("Drawing a Circle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawCirc(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);

	// 2.1.3 - Drawing a filled circle
	pOut->PrintMessage("Drawing a Circle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawCirc(P1, P2, gfxInfo, false);

	// 2.1.4 - Drawing a highlighted filled circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);
	//*******************************************
	pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.5- Hexagon Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Hexagon, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	///////////////////////
	/// ===================================================================================================================================

	//.1.1 - Drawing non-filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> non-filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);


	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->Drawhexa(P1, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->Drawhexa(P1, gfxInfo, true);


	// 2.1.3 - Drawing a filled hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);


	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->Drawhexa(P1, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->Drawhexa(P1, gfxInfo, true);



	pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->PrintMessage("Testing Input ability to read strings");
	pIn->GetSrting(pOut);
	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the string clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;

	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case FIGURES:
			pOut->PrintMessage("Action: Shapes , Creating Figure Toolbar");
			pOut->CreateFigureToolBar();
			break;
		case TO_PICK:
			pOut->PrintMessage("Action: Pick&hide , Creating Pick&hide Toolbar");
			pOut->CreatePickToolBar();
			break;
		case Pick_color:
			pOut->PrintMessage("Action: Pick&hide by color , Click anywhere");
			break;
		case UNDO:
			pOut->PrintMessage("Action: undo , Click anywhere");
			break;
		case REDO:
			pOut->PrintMessage("Action: redo , Click anywhere");
			break;
		case FILLING:
			pOut->PrintMessage("Action: Filling Color icon , Click anywhere");
			break;
		case DRAWING:
			pOut->PrintMessage("Action: Drawing Color icon , Click anywhere");
			break;
		case BLACK1:
			pOut->PrintMessage("Action: Black color icon , Click anywhere");
			break;
		case YELLOW1:
			pOut->PrintMessage("Action: Yellow color icon , Click anywhere");
			break;
		case ORANGE1:
			pOut->PrintMessage("Action: Orange color icon , Click anywhere");
			break;
		case RED1:
			pOut->PrintMessage("Action: Red color icon , Click anywhere");
			break;
		case GREEN1:
			pOut->PrintMessage("Action: Green color icon , Click anywhere");
			break;
		case BLUE1:
			pOut->PrintMessage("Action: Blue color icon , Click anywhere");
			break;
		case MOVE:
			pOut->PrintMessage("Action: Move figure icon , Click anywhere");
			break;
		case Pick_figure:
			pOut->PrintMessage("Action: Pick&hide by figure , Click anywhere");
			break;
		case Pick_both:
			pOut->PrintMessage("Action: Pick&hide by both color&figure , Click anywhere");
			break;
		case BACK_TO_DRAW:
			pOut->PrintMessage("Action: Back to Draw , Creating Draw Toolbar");
			pOut->CreateDrawToolBar();
			break;
		case DRAW_RECT:
			pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
			break;
		case DRAW_SQUARE:
			pOut->PrintMessage("Action: Draw a Square , Click anywhere");
			break;
		case DRAW_TRI:
			pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
			break;
		case DRAW_CIRC:
			pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
			break;
		case DRAW_HEXA:
			pOut->PrintMessage("Action: Draw a Hexagon , Click anywhere");
			break;
		case SELECT:
			pOut->PrintMessage("Action: Select Item , Click anywhere");
			break;
		case DELETE_FIG:
			pOut->PrintMessage("Action: Delete Item , Click anywhere");
			break;
		case CLEAR_ALL:
			pOut->PrintMessage("Action: Clear all , Click anywhere");
			break;
		case Start_Rec:
			pOut->PrintMessage("Action: Start Recording , Click anywhere");
			break;

		case Stop_Rec:
			pOut->PrintMessage("Action: Stop Recording , Click anywhere");
			break;

		case Play_Rec:
			pOut->PrintMessage("Action: play Record , Click anywhere");
			break;

		case Save_graph:
			pOut->PrintMessage("Action: Save a graph , Click anywhere");
			break;

		case load_graph:
			pOut->PrintMessage("Action: load a graph , Click anywhere");
			break;

		case STATUS:
			pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
			break;

		case DRAWING_AREA:
			pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
			break;

		case EMPTY:
			pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
			break;

		case TO_DRAW:
			pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
			pOut->CreateDrawToolBar();
			break;

		case TO_PLAY:
			pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
			pOut->CreatePlayToolBar();
			break;



			///TODO: Add more cases for the other action types


		case EXIT:
			break;
		}
	} while (ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x, y);


	delete pIn;
	delete pOut;
	return 0;
}


