
@interface UIKeyboardPredictionView : UIView {

    UIKBBackgroundView* m_backgroundView;
    UIKeyboardPredictionBarGrabber* m_grabber;
    NSMutableArray* m_predictionCells;
    unsigned long long m_activeIndex;
    double m_width;
    NSString* m_openQuote;
    NSString* m_closeQuote;
    UIView* m_message;
    UILabel* m_messageLabel;
    UIKBKeyView* m_messageKeyView;
    double m_messageShownTime;
    {CGPoint="x"d"y"d} m_initLocation;
    BOOL m_dragging;
    BOOL m_hasLongCandidates;
    BOOL m_currentInputModeEnablePrediction;
    UIView* m_leftDimmingView;
    UIView* m_rightDimmingView;
    BOOL m_touchOnDimmingView;
    BOOL m_delayActive;
    int _state;
    UITouch* _activeTouch;
    NSTimer* _updateTimer;
    NSArray* _scheduledPredictions;
    TIKeyboardCandidate* _scheduledAutocorrection;
    NSDate* _lastUpdateDate;
}
 + (id) sharedInstance;
 + (id) activeInstance;
 + (unsigned long long) numberOfCandidates;
 + (double) predictionViewHeightForState:(int)aorientation:(long long)b;
 + (double) overlapHeight;

 - (id) description;
 - (void) dealloc;
 - (int) messageCount;
 - (BOOL) show;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (id) activeTouch;
 - (void) setActiveTouch:(id)a ;
 - (double) heightForInterfaceOrientation:(long long)a ;
 - (BOOL) enabled;
 - (int) stateForCurrentPreferences;
 - (void) setPredictionViewState:(int)a animate:(BOOL)b notify:(BOOL)c ;
 - (void) setPredictionViewState:(int)a animate:(BOOL)b ;
 - (void) setShow:(BOOL)a ;
 - (void) updateBackgroundWithRenderConfig:(id)a ;
 - (id) updateTimer;
 - (void) inputModeDidChange;
 - (void) setLastUpdateDate:(id)a ;
 - (void) releaseMessage;
 - (void) setTouchedCellState:(int)a ;
 - (unsigned long long) indexForPoint:({CGPoint=dd})a ;
 - (void) setActiveCellWithIndex:(unsigned long long)a ;
 - (void) commitPrediction:(id)a ;
 - (void) delayActivateCellForPrediction:(id)a ;
 - (void) deactivateCandidate;
 - (void) acceptCandidateAtCell:(id)a ;
 - (id) labelTextForPrediction:(id)a typedString:(id)b ;
 - (id) scheduledPredictions;
 - (id) scheduledAutocorrection;
 - (void) _setPredictions:(id)a autocorrection:(id)b ;
 - (void) setScheduledPredictions:(id)a ;
 - (void) setScheduledAutocorrection:(id)a ;
 - (void) updateTimerFired:(id)a ;
 - (void) setUpdateTimer:(id)a ;
 - (id) lastUpdateDate;
 - (void) touchUpdateTimer;
 - (int) maxMessageCount;
 - (void) removeMessage;
 - (double) heightBeforeStateChangeForInterfaceOrientation:(long long)a ;
 - (void) showMessageWithSize:({CGSize=dd})a ;
 - (void) suppressLayoutSubviewsForCellLabels:(BOOL)a ;
 - (unsigned long long) predictionCount;
 - (void) acceptCandidate;
 - (void) activateCandidateAtPoint:({CGPoint=dd})a ;
 - (void) setPredictions:(id)a autocorrection:(id)b ;
 - (int) state;
 - (void) setState:(int)a ;
 - (void) suspend;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
