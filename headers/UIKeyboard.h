
@protocol UIKeyboardImplGeometryDelegate;
@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {

    UIView* m_snapshot;
    UITextInputTraits* m_defaultTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    long long m_orientation;
    long long m_idiom;
    BOOL m_hasExplicitOrientation;
}
 + ({CGSize=dd}) defaultSize;
 + (id) activeKeyboard;
 + ({CGSize=dd}) sizeForInterfaceOrientation:(long long)a;
 + ({CGSize=dd}) defaultSizeForInterfaceOrientation:(long long)a;
 + ({CGSize=dd}) keyboardSizeForInterfaceOrientation:(long long)a;
 + (BOOL) isInHardwareKeyboardMode;
 + (void) removeAllDynamicDictionaries;
 + (id) activeKeyboardForScreen:(id)a;
 + (void) clearActiveForScreen:(id)a;
 + (void) makeKeyboardActive:(id)aforScreen:(id)b;
 + (void) _clearActiveKeyboard;
 + (void) initImplementationNow;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) defaultFrameForInterfaceOrientation:(long long)a;
 + (BOOL) isOnScreen;
 + (BOOL) respondsToProxGesture;
 + (BOOL) shouldMinimizeForHardwareKeyboard;
 + (BOOL) splitKeyboardEnabled;

 - (BOOL) isActive;
 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) didMoveToWindow;
 - (BOOL) pointInside:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsEnded:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsCancelled:(id)a withEvent:(id)b ;
 - (void) _deactivateForBackgrounding;
 - (void) _wheelChangedWithEvent:(id)a ;
 - (BOOL) _mayRemainFocused;
 - (id) targetWindow;
 - (BOOL) shouldChangeFocusedItem:(id)a heading:(unsigned long long)b ;
 - (BOOL) canBecomeFocused;
 - (void) willMoveToWindow:(id)a ;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) deactivate;
 - (void) remoteControlReceivedWithEvent:(id)a ;
 - (void) updateLayout;
 - (void) setCaretBlinks:(BOOL)a ;
 - (void) _setRenderConfig:(id)a ;
 - (int) textEffectsVisibilityLevel;
 - (void) acceptAutocorrection;
 - (BOOL) isMinimized;
 - (BOOL) shouldSaveMinimizationState;
 - (void) prepareForGeometryChange;
 - (void) geometryChangeDone:(BOOL)a ;
 - (void) setCaretVisible:(BOOL)a ;
 - (void) setReturnKeyEnabled:(BOOL)a ;
 - (BOOL) canHandleEvent:(id)a ;
 - (void) removeAutocorrectPrompt;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})a splitWidthsChanged:(BOOL)b ;
 - (void) setMinimized:(BOOL)a ;
 - (BOOL) canDismiss;
 - (BOOL) caretBlinks;
 - (void) setCorrectionLearningAllowed:(BOOL)a ;
 - (void) setDefaultTextInputTraits:(id)a ;
 - (void) responseContextDidChange;
 - (BOOL) returnKeyEnabled;
 - (BOOL) caretVisible;
 - (id) _getCurrentKeyplaneName;
 - (id) _getCurrentKeyboardName;
 - (id) _getLocalizedInputMode;
 - (void) _setAutocorrects:(BOOL)a ;
 - (id) _getAutocorrection;
 - (BOOL) _hasCandidates;
 - (long long) _positionInCandidateList:(id)a ;
 - (void) autoAdjustOrientation;
 - (void) autoAdjustOrientationForSize:({CGSize=dd})a ;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a lazily:(BOOL)b ;
 - (void) clearActivePerScreenIfNeeded;
 - (BOOL) isActivePerScreen;
 - (void) clearSnapshot;
 - (void) takeSnapshot;
 - (long long) cursorLocation;
 - (BOOL) allowExternalChangeForFocusHeading:(unsigned long long)a cursorLocation:(long long)b ;
 - (void) setCursorLocation:(long long)a ;
 - (BOOL) disableInteraction;
 - (void) setDisableInteraction:(BOOL)a ;
 - ({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d}) geometryForMinimize:(BOOL)a ;
 - (void) keyboardMinMaximized:(id)a finished:(id)b context:(id)c ;
 - (void) minimize;
 - (void) maximize;
 - ({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d}) geometryForImplHeightDelta:(double)a ;
 - (void) prepareForImplBoundsHeightChange:(double)a suppressNotification:(BOOL)b ;
 - (void) implBoundsHeightChangeDone:(double)a suppressNotification:(BOOL)b ;
 - (id) initWithDefaultSize;
 - (id) initLazily;
 - (BOOL) hasAutocorrectPrompt;
 - (id) defaultTextInputTraits;
 - (BOOL) typingEnabled;
 - (void) setTypingEnabled:(BOOL)a ;
 - (BOOL) showPredictionBar;
 - (void) setShowPredictionBar:(BOOL)a ;
 - (void) syncMinimizedStateToHardwareKeyboardAttachedState;
 - (void) _setPasscodeOutlineAlpha:(double)a ;
 - (BOOL) showsCandidatesInline;
 - (void) setShowsCandidatesInline:(BOOL)a ;
 - (long long) keyboardIdiom;
 - (void) setKeyboardIdiom:(long long)a ;
 - (void) manualKeyboardWillBeOrderedIn;
 - (void) manualKeyboardWasOrderedIn;
 - (void) manualKeyboardWillBeOrderedOut;
 - (void) manualKeyboardWasOrderedOut;
 - (id) _baseKeyForRepresentedString:(id)a ;
 - (id) _keyplaneForKey:(id)a ;
 - (id) _keyplaneNamed:(id)a ;
 - (void) _changeToKeyplane:(id)a ;
 - (void) _setUndocked:(BOOL)a ;
 - (void) _setSplit:(BOOL)a ;
 - (id) _touchPoint:({CGPoint=dd})a ;
 - (id) _typeCharacter:(id)a withError:({CGPoint=dd})b shouldTypeVariants:(BOOL)c baseKeyForVariants:(BOOL)d ;
 - (void) _setInputMode:(id)a ;
 - (void) _acceptCurrentCandidate;
 - (BOOL) _isAutomaticKeyboard;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (long long) interfaceOrientation;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) activate;
 - (void) setOrientation:(long long)a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setNeedsDisplay;
 - (void) displayLayer:(id)a ;


@end
