
@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar {

    UIKBTree* _indirectKeyboard;
    UIView* _selectionView;
    long long _selectedKeyIndex;
    long long _savedSelectedKeyIndex;
    BOOL _useGridSelection;
    BOOL _suppressOperations;
}
 + ({CGSize=dd}) keyboardSizeForInputMode:(id)ascreenTraits:(id)b;
 + (id) carKeyboardNameForKeyboard:(id)ascreenTraits:(id)b;

 - (void) dealloc;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsEnded:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsCancelled:(id)a withEvent:(id)b ;
 - (BOOL) _handlePhysicalButtonEvent:(id)a ;
 - (void) _handleKeyUIEvent:(id)a ;
 - (void) _wheelChangedWithEvent:(id)a ;
 - (void) _moveWithEvent:(id)a ;
 - (void) setKeyboardAppearance:(long long)a ;
 - (void) remoteControlReceivedWithEvent:(id)a ;
 - (BOOL) canHandleEvent:(id)a ;
 - (void) showKeyboardWithInputTraits:(id)a screenTraits:(id)b splitTraits:(id)c ;
 - (long long) cursorLocation;
 - (void) setCursorLocation:(long long)a ;
 - (unsigned long long) targetEdgesForScreenGestureRecognition;
 - (void) flushKeyCache:(id)a ;
 - (void) setKeyplaneName:(id)a ;
 - (id) cacheTokenForKeyplane:(id)a ;
 - (BOOL) shouldMergeKey:(id)a ;
 - (void) setKeyboardName:(id)a appearance:(long long)b ;
 - (BOOL) shouldPreventInputManagerHitTestingForKey:(id)a ;
 - (BOOL) shouldRetestKey:(id)a withKeyplane:(id)b ;
 - (void) setSelectedKeyIndex:(long long)a ;
 - (int) enabledStateForKey:(id)a ;
 - (id) currentKey;
 - (int) activeStateForKey:(id)a ;
 - (void) updateStatesForGridSelection;
 - (void) setHighlightedVariantIndex:(long long)a key:(id)b ;
 - (id) keyplaneKeyForCurrentKeyplane;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrameForKeyIndex:(long long)a ;
 - (void) deactivateCurrentKey;
 - (BOOL) _handleMoveWithEvent:(id)a ;
 - (BOOL) _handleWheelChangedWithEvent:(id)a ;
 - (BOOL) _handleRemoteControlReceivedWithEvent:(id)a ;
 - (BOOL) _handlePhysicalKeyDownWithEvent:(id)a ;
 - (void) runWithSuppressedActions:(@?)a ;
 - (void) takeKeyAction:(id)a ;
 - (long long) keyIndexAtPoint:({CGPoint=dd})a ;
 - (BOOL) handleLinearDirectionalInput:(int)a ;
 - (BOOL) handleVisualDirectionalInput:(int)a ;
 - (void) updateSelectionForCurrentKeyplane;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
