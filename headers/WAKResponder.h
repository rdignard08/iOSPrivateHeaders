
@interface WAKResponder : NSObject {

}

 - (void) deleteBackward:(id)a;
 - (void) deleteForward:(id)a;
 - (void) moveUp:(id)a;
 - (void) moveDown:(id)a;
 - (BOOL) tryToPerform:(SEL)awith:(id)b;
 - (void) insertParagraphSeparator:(id)a;
 - (void) moveDownAndModifySelection:(id)a;
 - (void) moveLeft:(id)a;
 - (void) moveLeftAndModifySelection:(id)a;
 - (void) moveRight:(id)a;
 - (void) moveRightAndModifySelection:(id)a;
 - (void) moveUpAndModifySelection:(id)a;
 - (void) insertText:(id)a;
 - (BOOL) acceptsFirstResponder;
 - (void) mouseDown:(id)a;
 - (void) mouseUp:(id)a;
 - (void) scrollWheel:(id)a;
 - (void) handleEvent:(id)a;
 - (id) nextResponder;
 - (void) _forwardEvent:(id)a;
 - (void) mouseEntered:(id)a;
 - (void) mouseExited:(id)a;
 - (void) mouseMoved:(id)a;
 - (void) keyDown:(id)a;
 - (void) keyUp:(id)a;
 - (void) touch:(id)a;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;


@end
