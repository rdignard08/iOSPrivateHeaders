
@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {

    i m_isAccessibilityElement;
    Q m_accessibilityTraitsFromAncestor;
}

 - (void) dealloc;
 - (id) accessibilityIdentifier;
 - (id) stringForRange:({_NSRange=QQ})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessibilityFrame;
 - (id) accessibilityHint;
 - ({CGPoint=dd}) accessibilityActivationPoint;
 - (Q) accessibilityTraits;
 - (id) accessibilityLanguage;
 - (void) accessibilityElementDidBecomeFocused;
 - (void) accessibilityIncrement;
 - (void) accessibilityDecrement;
 - (BOOL) accessibilityScroll:(q)a;
 - (id) accessibilityFocusedUIElement;
 - (id) accessibilityHitTest:({CGPoint=dd})a;
 - (id) _accessibilityParentForSubview:(id)a;
 - (id) attachmentView;
 - (void) detach;
 - (id) initWithAccessibilityObject:(^{AccessibilityObject=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}})a;
 - (void) postFocusChangeNotification;
 - (void) postSelectedTextChangeNotification;
 - (void) postLayoutChangeNotification;
 - (void) postLiveRegionChangeNotification;
 - (void) postLiveRegionCreatedNotification;
 - (void) postChildrenChangedNotification;
 - (void) postLoadCompleteNotification;
 - (void) postInvalidStatusChangedNotification;
 - (void) postValueChangedNotification;
 - (void) accessibilityPostedNotification:(id)a;
 - (BOOL) fileUploadButtonReturnsValueInTitle;
 - (id) accessibilityPlatformMathSubscriptKey;
 - (id) accessibilityPlatformMathSuperscriptKey;
 - ({CGPoint=dd}) convertPointToScreenSpace:(^{FloatPoint=ff})a;
 - (BOOL) _prepareAccessibilityCall;
 - (BOOL) accessibilityCanFuzzyHitTest;
 - (^{WebAccessibilityObjectWrapper=#^{AccessibilityObject}iQ}) accessibilityPostProcessHitTest:({CGPoint=dd})a;
 - (BOOL) isAttachment;
 - (q) accessibilityElementCount;
 - (id) accessibilityElementAtIndex:(q)a;
 - (q) indexOfAccessibilityElement:(id)a;
 - (BOOL) _accessibilityIsLandmarkRole:(i)a;
 - (Q) _axLinkTrait;
 - (Q) _axVisitedTrait;
 - (Q) _axHeaderTrait;
 - (id) accessibilityValue;
 - (Q) _axContainedByListTrait;
 - (Q) _axContainedByTableTrait;
 - (Q) _axContainedByLandmarkTrait;
 - (Q) _axWebContentTrait;
 - (Q) _axSecureTextFieldTrait;
 - (Q) _axTextEntryTrait;
 - (Q) _axHasTextCursorTrait;
 - (Q) _axTextOperationsAvailableTrait;
 - (Q) _axImageTrait;
 - (Q) _axTabButtonTrait;
 - (Q) _axButtonTrait;
 - (Q) _axToggleTrait;
 - (Q) _axPopupButtonTrait;
 - (Q) _axRadioButtonTrait;
 - (Q) _axStaticTextTrait;
 - (Q) _axAdjustableTrait;
 - (Q) _axMenuItemTrait;
 - (Q) _axSelectedTrait;
 - (Q) _axNotEnabledTrait;
 - (Q) _accessibilityTraitsFromAncestors;
 - (id) accessibilityLabel;
 - (BOOL) isAccessibilityElement;
 - (id) accessibilityContainer;
 - (BOOL) containsUnnaturallySegmentedChildren;
 - (BOOL) isSVGGroupElement;
 - (BOOL) determineIsAccessibilityElement;
 - (BOOL) stringValueShouldBeUsedInLabel;
 - (^{AccessibilityTableCell=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}iBi^{Node}^{RenderObject}i}) tableCellParent;
 - (^{AccessibilityTable=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}iBi^{Node}^{RenderObject}{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}{RefPtr<WebCore::AccessibilityObject>=^{AccessibilityObject}}B}) tableParent;
 - (void) postScrollStatusChangeNotification;
 - (id) _accessibilityWebDocumentView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRectToScreenSpace:(^{IntRect={IntPoint=ii}{IntSize=ii}})a;
 - (id) _accessibilityNextElementsWithCount:(I)a;
 - (id) _accessibilityPreviousElementsWithCount:(I)a;
 - (void) accessibilityModifySelection:(i)aincrease:(BOOL)b;
 - (BOOL) _addAccessibilityObject:(^{AccessibilityObject=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}})atoTextMarkerArray:(id)b;
 - ({_NSRange=QQ}) _convertToNSRange:(^{Range=I{Ref<WebCore::Document>=^{Document}}{RangeBoundaryPoint={RefPtr<WebCore::Node>=^{Node}}i{RefPtr<WebCore::Node>=^{Node}}}{RangeBoundaryPoint={RefPtr<WebCore::Node>=^{Node}}i{RefPtr<WebCore::Node>=^{Node}}}})a;
 - (id) textMarkerRange;
 - (q) positionForTextMarker:(id)a;
 - ({PassRefPtr<WebCore::Range>=^{Range}}) _convertToDOMRange:({_NSRange=QQ})a;
 - (id) textMarkerForPosition:(q)a;
 - (id) arrayOfTextForTextMarkers:(id)aattributed:(BOOL)b;
 - (id) _stringForRange:({_NSRange=QQ})aattributed:(BOOL)b;
 - (id) textMarkerRangeForSelection;
 - (id) stringForTextMarkers:(id)a;
 - (void) enableAttributeCaching;
 - (void) disableAttributeCaching;
 - (^{CGPath=}) _accessibilityPath;
 - (^{WebAccessibilityObjectWrapper=#^{AccessibilityObject}iQ}) _accessibilityListAncestor;
 - (^{WebAccessibilityObjectWrapper=#^{AccessibilityObject}iQ}) _accessibilityLandmarkAncestor;
 - (^{WebAccessibilityObjectWrapper=#^{AccessibilityObject}iQ}) _accessibilityTableAncestor;
 - (d) _accessibilityMinValue;
 - (d) _accessibilityMaxValue;
 - (id) accessibilityTitleElement;
 - (id) accessibilityHeaderElements;
 - (id) accessibilityElementForRow:(q)aandColumn:(q)b;
 - ({_NSRange=QQ}) accessibilityRowRange;
 - ({_NSRange=QQ}) accessibilityColumnRange;
 - (id) accessibilityPlaceholderValue;
 - (BOOL) accessibilityIsComboBox;
 - (id) accessibilityURL;
 - ({CGPoint=dd}) _accessibilityConvertPointToViewSpace:({CGPoint=dd})a;
 - (BOOL) _accessibilityScrollToVisible;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessibilityElementRect;
 - (BOOL) accessibilityRequired;
 - (id) accessibilityFlowToElements;
 - (id) accessibilityLinkedElement;
 - (void) _accessibilityActivate;
 - ({CGPoint=dd}) _accessibilityScrollPosition;
 - ({CGSize=dd}) _accessibilityScrollSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _accessibilityScrollVisibleRect;
 - (void) accessibilityIncreaseSelection:(i)a;
 - (void) accessibilityDecreaseSelection:(i)a;
 - (void) accessibilityMoveSelectionToMarker:(id)a;
 - (void) _accessibilitySetValue:(id)a;
 - ({_NSRange=QQ}) elementTextRange;
 - (^{WebAccessibilityObjectWrapper=#^{AccessibilityObject}iQ}) accessibilityObjectForTextMarker:(id)a;
 - (id) attributedStringForRange:({_NSRange=QQ})a;
 - ({_NSRange=QQ}) _accessibilitySelectedTextRange;
 - (void) _accessibilitySetSelectedTextRange:({_NSRange=QQ})a;
 - (id) elementsForRange:({_NSRange=QQ})a;
 - (id) selectionRangeString;
 - (id) selectedTextMarker;
 - (id) lineEndMarkerForMarker:(id)a;
 - (id) lineStartMarkerForMarker:(id)a;
 - (id) nextMarkerForMarker:(id)a;
 - (id) previousMarkerForMarker:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForTextMarkers:(id)a;
 - (id) textMarkerForPoint:({CGPoint=dd})a;
 - (id) accessibilitySpeechHint;
 - (BOOL) accessibilityARIAIsBusy;
 - (id) accessibilityARIALiveRegionStatus;
 - (id) accessibilityARIARelevantStatus;
 - (BOOL) accessibilityARIALiveRegionIsAtomic;
 - (BOOL) accessibilitySupportsARIAExpanded;
 - (BOOL) accessibilityIsExpanded;
 - (id) accessibilityInvalidStatus;
 - (id) accessibilityMathRootIndexObject;
 - (id) accessibilityMathRadicandObject;
 - (id) accessibilityMathNumeratorObject;
 - (id) accessibilityMathDenominatorObject;
 - (id) accessibilityMathBaseObject;
 - (id) accessibilityMathSubscriptObject;
 - (id) accessibilityMathSuperscriptObject;
 - (id) accessibilityMathUnderObject;
 - (id) accessibilityMathOverObject;
 - (id) accessibilityMathPostscripts;
 - (id) accessibilityMathPrescripts;
 - (id) accessibilityMathFencedOpenString;
 - (id) accessibilityMathFencedCloseString;
 - (BOOL) accessibilityIsMathTopObject;
 - (q) accessibilityMathLineThickness;
 - (id) accessibilityMathType;
 - ({CGPoint=dd}) accessibilityClickPoint;
 - (void) accessibilitySetPostedNotificationCallback:(^?)awithContext:(^v)b;


@end