
@interface UIKeyboardAutomatic : UIKeyboard {

    BOOL showsCandidateBar;
    BOOL showsCandidateInline;
    BOOL receivedCandidatesInCurrentInputMode;
    BOOL caretBlinks;
}

 - (BOOL) isActive;
 - (void) dealloc;
 - (void) setCaretBlinks:(BOOL)a;
 - (BOOL) showsCandidateBar;
 - (BOOL) showsCandidateInline;
 - (void) setShowsCandidateBar:(BOOL)a;
 - (BOOL) caretBlinks;
 - (void) setShowsCandidateInline:(BOOL)a;
 - (BOOL) receivedCandidatesInCurrentInputMode;
 - (void) setReceivedCandidatesInCurrentInputMode:(BOOL)a;
 - (void) minimize;
 - (void) maximize;
 - (void) prepareForImplBoundsHeightChange:(double)asuppressNotification:(BOOL)b;
 - (void) implBoundsHeightChangeDone:(double)asuppressNotification:(BOOL)b;
 - (BOOL) _isAutomaticKeyboard;
 - (void) willResume:(id)a;
 - (void) didSuspend:(id)a;
 - ({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d}) geometryForHeightDelta:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) activate;


@end
