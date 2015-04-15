
@interface UITextSelectionView : UIView {

    UITextInteractionAssistant* m_interactionAssistant;
    UITextSelection* m_selection;
    NSTimer* m_caretTimer;
    UIView* m_caretView;
    UITextRangeView* m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray* m_replacements;
    BOOL m_deferSelectionCommands;
    ^{__CFRunLoopObserver=} m_observer;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (id) interactionAssistant;
 - (void) deferredUpdateSelectionRects;
 - (id) dynamicCaret;
 - (id) selection;
 - (void) updateSelectionWithDocumentPoint:({CGPoint=dd})a ;
 - (void) updateSelectionRects;
 - (void) deactivate;
 - (void) selectionChanged;
 - (id) scrollView;
 - (void) setCaretBlinks:(BOOL)a ;
 - (id) dynamicCaretList;
 - (id) replacements;
 - (BOOL) caretBlinks;
 - (void) updateDocumentHasContent:(BOOL)a ;
 - (void) startCaretBlinkIfNeeded;
 - (void) layoutChangedByScrolling:(BOOL)a ;
 - (id) initWithInteractionAssistant:(id)a ;
 - (void) installIfNecessary;
 - (void) configureForHighlightMode;
 - (void) hideSelectionCommands;
 - (void) showSelectionCommands;
 - (void) configureForSelectionMode;
 - (void) cancelDelayedCommandRequests;
 - (void) updateBaseIsStartWithDocumentPoint:({CGPoint=dd})a ;
 - (id) rangeView;
 - (void) updateSelectionDots;
 - (void) showSelectionCommandsAfterDelay:(double)a ;
 - (BOOL) selectionCommandsShowing;
 - (void) showReplacementsWithGenerator:(id)a forDictation:(BOOL)b afterDelay:(double)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionBoundingBox;
 - (void) textSelectionViewActivated:(id)a ;
 - (void) selectionWillScroll:(id)a ;
 - (void) selectionDidScroll:(id)a ;
 - (void) scaleWillChange:(id)a ;
 - (void) scaleDidChange:(id)a ;
 - (void) inputViewWillAnimate;
 - (void) inputViewDidAnimate;
 - (void) willRotate:(id)a ;
 - (void) didRotate:(id)a ;
 - (void) windowDidResignOrBecomeKey;
 - (void) inputViewWillMove:(id)a ;
 - (void) inputViewDidMove;
 - (void) viewAnimate:(id)a ;
 - (void) inputModeDidChange:(id)a ;
 - (void) appearOrFadeIfNecessary;
 - (void) deferredUpdateSelectionCommands;
 - (BOOL) affectedByScrollerNotification:(id)a ;
 - (void) showCalloutBarAfterDelay:(double)a ;
 - (void) hideSelectionCommandsAfterDelay:(double)a ;
 - (void) inputViewWillChange;
 - (void) inputViewDidChange;
 - (BOOL) shouldBeVisible;
 - (void) clearCaret;
 - (void) clearCaretBlinkTimer;
 - (void) clearRange;
 - (id) caretView;
 - (void) showCaret:(int)a ;
 - (void) touchCaretBlinkTimer;
 - (void) updateSelectionRectsIfNeeded;
 - (void) showCommandsWithReplacements:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clippedTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) updateCalloutBarRects:(id)a effectsWindow:(id)b ;
 - (void) setReplacements:(id)a ;
 - (void) calculateAndShowReplacements:(id)a ;
 - (void) hideCaret:(int)a ;
 - (void) caretBlinkTimerFired:(id)a ;
 - (void) updateSelectionCommands;
 - (void) prepareForMagnification;
 - (void) doneMagnifying;
 - (void) configureForReplacementMode;
 - (void) removeFromSuperview;
 - (void) setVisible:(BOOL)a ;
 - (BOOL) visible;
 - (void) activate;
 - (void) detach;


@end
