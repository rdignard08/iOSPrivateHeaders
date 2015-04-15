
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {

    @"NSMutableArray" _endPoints;
    @"UITouch" candidateEndpoint;
}

 - (void) reset;
 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setCandidateEndpoint:(id)a;
 - (id) candidateEndpoint;
 - (BOOL) segmentsLookLikeAWipe:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
