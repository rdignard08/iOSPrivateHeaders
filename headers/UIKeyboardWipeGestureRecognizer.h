
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {

    NSMutableArray* _endPoints;
    UITouch* candidateEndpoint;
}

 - (void) reset;
 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) setCandidateEndpoint:(id)a ;
 - (id) candidateEndpoint;
 - (BOOL) segmentsLookLikeAWipe:(id)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
