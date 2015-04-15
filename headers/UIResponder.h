
@protocol UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation;
@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation> {

}
@property (nonatomic, retain, readonly) UIView* inputView;
@property (nonatomic, retain, readonly) UIView* inputAccessoryView;
@property (nonatomic, retain, readonly) UIInputViewController* inputViewController;
@property (nonatomic, retain, readonly) UIInputViewController* inputAccessoryViewController;
@property (nonatomic, retain, readonly) UITextInputMode* textInputMode;
@property (nonatomic, retain, readonly) NSString* textInputContextIdentifier;
@property (nonatomic, assign, readonly) NSArray* keyCommands;
@property (nonatomic, assign, readonly) UIResponder* _editingDelegate;
@property (nonatomic, assign, readonly) UIResponder* _responderForEditing;
@property (nonatomic, retain, readwrite) NSUserActivity* userActivity;
@property (nonatomic, assign, readonly, getter=_proxyTextInput) NSNumber* __content;
@property (nonatomic, assign, readonly) NSNumber* _textSelectingContainer;
@property (nonatomic, assign, readonly, getter=isEditable) NSNumber* editable;
@property (nonatomic, assign, readonly, getter=isEditing) NSNumber* editing;
@property (nonatomic, assign, readonly, getter=_caretRect) NSNumber* caretRect;
@property (nonatomic, copy, readwrite) NSString* restorationIdentifier;
@property (nonatomic, assign, readonly) NSUndoManager* undoManager;
 + (void) _startDeferredTrackingObjectsWithIdentifiers;
 + (void) _cleanupAllStateRestorationTables;
 + (void) _updateStateRestorationIdentifierMap;
 + (id) objectWithRestorationIdentifierPath:(id)a;
 + (void) _setRestoredIdentifierPathForObject:(id)aidentifierPath:(id)b;
 + (void) _prepareForSecondPassStateRestoration;
 + (void) _finishStateRestoration;
 + (void) clearTextInputContextIdentifier:(id)a;
 + (void) _stopDeferredTrackingObjectsWithIdentifiers;
 + (void) _cleanupStateRestorationObjectIdentifierTrackingTables;

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) _responderForEditing;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (id) targetForAction:(SEL)awithSender:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (id) _deepestUnambiguousResponder;
 - (void) updateUserActivityState:(id)a;
 - (void) restoreUserActivityState:(id)a;
 - (void) _handleKeyUIEvent:(id)a;
 - (id) _keyCommandForEvent:(id)a;
 - (void) _handleKeyEvent:(^{__GSEvent=})a;
 - (void) _wheelChangedWithEvent:(id)a;
 - (void) motionEnded:(long long)awithEvent:(id)b;
 - (id) keyCommands;
 - (id) textInputMode;
 - (BOOL) _canShowTextServices;
 - (id) _showServiceForText:(id)atype:(long long)bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})cinView:(id)d;
 - (void) _rebuildStateRestorationIdentifierPath;
 - (id) restorationIdentifier;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (id) _restorationIdentifierPath;
 - (void) _setFirstResponder:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderExternalTouchRectForWindow:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderSelectionRectForWindow:(id)a;
 - (id) _window;
 - (void) _completeForwardingTouches:(id)aphase:(long long)bevent:(id)c;
 - (void) _windowResignedKey;
 - (void) _windowBecameKey;
 - (void) gestureEnded:(^{__GSEvent=})a;
 - (void) _moveWithEvent:(id)a;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - (BOOL) _disableAutomaticKeyboardUI;
 - (BOOL) _containedInAbsoluteResponderChain;
 - (id) _firstResponder;
 - (BOOL) _becomeFirstResponderWhenPossible;
 - (BOOL) _supportsBecomeFirstResponderWhenPossible;
 - (id) _responderWindow;
 - (id) _responderSelectionContainerViewForResponder:(id)a;
 - (void) setRestorationIdentifier:(id)a;
 - (id) _responderForBecomeFirstResponder;
 - (id) _nextResponderOverride;
 - (BOOL) _containsResponder:(id)a;
 - (BOOL) canBecomeFirstResponder;
 - (id) _nextKeyResponder;
 - (id) _previousKeyResponder;
 - (void) _clearBecomeFirstResponderWhenCapable;
 - (BOOL) _canBecomeFirstResponderWhenPossible;
 - (id) nextFirstResponder;
 - (void) _clearOverrideNextResponder;
 - (void) _clearRestorableResponderStatus;
 - (BOOL) _resignIfContainsFirstResponder;
 - (BOOL) isFirstResponder;
 - (BOOL) _isRootForKeyResponderCycle;
 - (BOOL) _requiresKeyboardWhenFirstResponder;
 - (BOOL) isEditing;
 - (BOOL) _isTransitioningFromView:(id)a;
 - (void) _controlTouchBegan:(id)awithEvent:(id)b;
 - (void) _controlTouchMoved:(id)awithEvent:(id)b;
 - (void) _controlTouchEnded:(id)awithEvent:(id)b;
 - (id) interactionAssistant;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionClipRect;
 - (id) textInputView;
 - (void) beginSelectionChange;
 - (void) endSelectionChange;
 - (id) _textSelectingContainer;
 - (BOOL) _canBecomeFirstResponder;
 - (id) _nextViewControllerInResponderChain;
 - (void) _beginPinningInputViews;
 - (void) _endPinningInputViews;
 - (BOOL) _isViewController;
 - (id) _keyCommands;
 - (id) userActivity;
 - (void) setUserActivity:(id)a;
 - (id) _userActivity;
 - (id) _editingDelegate;
 - (BOOL) _canChangeFirstResponder:(id)atoResponder:(id)b;
 - (void) _finishResignFirstResponder;
 - (void) _becomeFirstResponder;
 - (void) reloadInputViews;
 - (void) _resignFirstResponder;
 - (BOOL) canResignFirstResponder;
 - (id) _targetForAction:(SEL)awithSender:(id)bcanPerformActionBlock:(@?)c;
 - (void) _overrideInputViewNextResponderWithResponder:(id)a;
 - (void) _overrideInputAccessoryViewNextResponderWithResponder:(id)a;
 - (void) motionBegan:(long long)awithEvent:(id)b;
 - (void) motionCancelled:(long long)awithEvent:(id)b;
 - (void) remoteControlReceivedWithEvent:(id)a;
 - (void) gestureStarted:(^{__GSEvent=})a;
 - (void) gestureChanged:(^{__GSEvent=})a;
 - (void) _tagAsRestorableResponder;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (id) inputViewController;
 - (id) textInputContextIdentifier;
 - (id) inputAccessoryViewController;
 - (void) reloadInputViewsWithoutReset;
 - (id) _keyboardResponder;
 - (void) _completeForwardingTouches:(id)aphase:(long long)bevent:(id)cindex:(unsigned long long)d;
 - (id) _primaryContentResponder;
 - (BOOL) _requiresKeyboardWindowWhenFirstResponder;
 - (BOOL) _requiresKeyboardResetOnReload;
 - (void) _becomeFirstResponderAndMakeVisible;
 - (BOOL) _isPinningInputViews;
 - (id) _responderSelectionImage;
 - (void) _didChangeToFirstResponder:(id)a;
 - (id) _proxyTextInput;
 - (BOOL) _usesDeemphasizedTextAppearance;
 - (void) _expandSelectionToStartOfWordsBeforeCaretSelection:(int)a;
 - (void) _extendCurrentSelection:(int)a;
 - (void) _setCaretSelectionAtEndOfSelection;
 - (id) _moveToEndOfWord:(BOOL)awithHistory:(id)b;
 - (id) _moveToEndOfLine:(BOOL)awithHistory:(id)b;
 - (id) _moveRight:(BOOL)awithHistory:(id)b;
 - (id) _moveToStartOfWord:(BOOL)awithHistory:(id)b;
 - (id) _moveToStartOfLine:(BOOL)awithHistory:(id)b;
 - (id) _moveLeft:(BOOL)awithHistory:(id)b;
 - (id) _moveToEndOfParagraph:(BOOL)awithHistory:(id)b;
 - (id) _moveToEndOfDocument:(BOOL)awithHistory:(id)b;
 - (id) _moveDown:(BOOL)awithHistory:(id)b;
 - (id) _moveToStartOfParagraph:(BOOL)awithHistory:(id)b;
 - (id) _moveToStartOfDocument:(BOOL)awithHistory:(id)b;
 - (id) _moveUp:(BOOL)awithHistory:(id)b;
 - (void) _deleteByWord;
 - (void) _deleteToStartOfLine;
 - (void) _deleteToEndOfLine;
 - (void) _setMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (void) _unmarkText;
 - (void) _setGestureRecognizers;
 - (unsigned int) _characterBeforeCaretSelection;
 - (unsigned int) _characterInRelationToRangedSelection:(int)a;
 - (void) _moveCurrentSelection:(int)a;
 - (void) _expandSelectionToBackwardDeletionCluster;
 - (void) _deleteBackwardAndNotify:(BOOL)a;
 - (void) _deleteForwardAndNotify:(BOOL)a;
 - (unsigned int) _characterInRelationToCaretSelection:(int)a;
 - (id) _wordContainingCaretSelection;
 - (unsigned int) _characterAfterCaretSelection;
 - (id) _rangeOfEnclosingWord:(id)a;
 - (id) _positionAtStartOfWords:(unsigned long long)abeforePosition:(id)b;
 - (id) _fullText;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _lastRectForRange:(id)a;
 - (id) _rangeOfText:(id)aendingAtPosition:(id)b;
 - (void) _replaceCurrentWordWithText:(id)a;
 - (void) _selectAll;
 - (BOOL) _selectionAtDocumentStart;
 - ({_NSRange=QQ}) _nsrangeForTextRange:(id)a;
 - (BOOL) _shouldPerformUICalloutBarButtonReplaceAction:(SEL)aforText:(id)bcheckAutocorrection:(BOOL)c;
 - (BOOL) _selectionAtDocumentEnd;
 - (id) _positionFromPosition:(id)ainDirection:(long long)boffset:(long long)cwithAffinityDownstream:(BOOL)d;
 - (void) _scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (long long) _selectionAffinity;
 - (id) _fontForCaretSelection;
 - (id) _textColorForCaretSelection;
 - (id) _newPhraseBoundaryGestureRecognizer;
 - (BOOL) _hasMarkedText;
 - (BOOL) _usesAsynchronousProtocol;
 - (id) _selectableText;
 - (id) _fullRange;
 - (int) _indexForTextPosition:(id)a;
 - (id) _clampedpositionFromPosition:(id)aoffset:(int)b;
 - (id) _keyInput;
 - (void) _setSelectedTextRange:(id)awithAffinityDownstream:(BOOL)b;
 - (void) _updateSelectionWithTextRange:(id)awithAffinityDownstream:(BOOL)b;
 - (BOOL) _isEmptySelection;
 - (id) _setHistory:(id)awithExtending:(BOOL)bwithAnchor:(int)cwithAffinityDownstream:(BOOL)d;
 - (id) _setSelectionRangeWithHistory:(id)a;
 - (void) _phraseBoundaryGesture:(id)a;
 - (BOOL) _selectionAtWordStart;
 - (BOOL) _hasMarkedTextOrRangedSelection;
 - (void) _expandSelectionToStartOfWordBeforeCaretSelection;
 - (id) _rangeOfLineEnclosingPosition:(id)a;
 - (id) _rangeOfParagraphEnclosingPosition:(id)a;
 - (id) _findPleasingWordBoundaryFromPosition:(id)a;
 - (id) _asTextSelection;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _caretRect;
 - (long long) selectionAffinity;
 - (BOOL) isEditable;
 - (id) firstResponder;
 - (id) undoManager;
 - ({_NSRange=QQ}) _selectedNSRange;
 - (void) scrollWheel:(^{__GSEvent=})a;
 - (id) nextResponder;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;


@end
