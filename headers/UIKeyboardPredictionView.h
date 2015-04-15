
@interface UIKeyboardPredictionView : UIView {

    @"UIKBBackgroundView" m_backgroundView;
    @"UIKeyboardPredictionBarGrabber" m_grabber;
    @"NSMutableArray" m_predictionCells;
    Q m_activeIndex;
    d m_width;
    @"NSString" m_openQuote;
    @"NSString" m_closeQuote;
    @"UIView" m_message;
    @"UILabel" m_messageLabel;
    @"UIKBKeyView" m_messageKeyView;
    d m_messageShownTime;
    {CGPoint="x"d"y"d} m_initLocation;
    BOOL m_dragging;
    BOOL m_hasLongCandidates;
    BOOL m_currentInputModeEnablePrediction;
    @"UIView" m_leftDimmingView;
    @"UIView" m_rightDimmingView;
    BOOL m_touchOnDimmingView;
    BOOL m_delayActive;
    i _state;
    @"UITouch" _activeTouch;
    @"NSTimer" _updateTimer;
    @"NSArray" _scheduledPredictions;
    @"TIKeyboardCandidate" _scheduledAutocorrection;
    @"NSDate" _lastUpdateDate;
}
 + (id) sharedInstance;
 + (id) activeInstance;
 + (Q) numberOfCandidates;
 + (d) predictionViewHeightForState:(i)aorientation:(q)b;
 + (d) overlapHeight;

 - (id) description;
 - (void) dealloc;
 - (i) messageCount;
 - (BOOL) show;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (id) activeTouch;
 - (void) setActiveTouch:(id)a;
 - (d) heightForInterfaceOrientation:(q)a;
 - (BOOL) enabled;
 - (i) stateForCurrentPreferences;
 - (void) setPredictionViewState:(i)aanimate:(BOOL)bnotify:(BOOL)c;
 - (void) setPredictionViewState:(i)aanimate:(BOOL)b;
 - (void) setShow:(BOOL)a;
 - (void) updateBackgroundWithRenderConfig:(id)a;
 - (id) updateTimer;
 - (void) inputModeDidChange;
 - (void) setLastUpdateDate:(id)a;
 - (void) releaseMessage;
 - (void) setTouchedCellState:(i)a;
 - (Q) indexForPoint:({CGPoint=dd})a;
 - (void) setActiveCellWithIndex:(Q)a;
 - (void) commitPrediction:(id)a;
 - (void) delayActivateCellForPrediction:(id)a;
 - (void) deactivateCandidate;
 - (void) acceptCandidateAtCell:(id)a;
 - (id) labelTextForPrediction:(id)atypedString:(id)b;
 - (id) scheduledPredictions;
 - (id) scheduledAutocorrection;
 - (void) _setPredictions:(id)aautocorrection:(id)b;
 - (void) setScheduledPredictions:(id)a;
 - (void) setScheduledAutocorrection:(id)a;
 - (void) updateTimerFired:(id)a;
 - (void) setUpdateTimer:(id)a;
 - (id) lastUpdateDate;
 - (void) touchUpdateTimer;
 - (i) maxMessageCount;
 - (void) removeMessage;
 - (d) heightBeforeStateChangeForInterfaceOrientation:(q)a;
 - (void) showMessageWithSize:({CGSize=dd})a;
 - (void) suppressLayoutSubviewsForCellLabels:(BOOL)a;
 - (Q) predictionCount;
 - (void) acceptCandidate;
 - (void) activateCandidateAtPoint:({CGPoint=dd})a;
 - (void) setPredictions:(id)aautocorrection:(id)b;
 - (i) state;
 - (void) setState:(i)a;
 - (void) suspend;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
