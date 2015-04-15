
@interface WebAccessibilityObjectWrapperBase : NSObject {

    ^{AccessibilityObject=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}} m_object;
}
 + (void) accessibilitySetShouldRepostNotifications:(BOOL)a;

 - (id) attachmentView;
 - (void) detach;
 - (id) initWithAccessibilityObject:(^{AccessibilityObject=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}})a ;
 - (void) accessibilityPostedNotification:(id)a ;
 - (BOOL) fileUploadButtonReturnsValueInTitle;
 - (id) accessibilityPlatformMathSubscriptKey;
 - (id) accessibilityPlatformMathSuperscriptKey;
 - (BOOL) updateObjectBackingStore;
 - (^{AccessibilityObject=^^?II{Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::AccessibilityObject>}II}Bii{RetainPtr<WebAccessibilityObjectWrapper>=^v}}) accessibilityObject;
 - (BOOL) titleTagShouldBeUsedInDescriptionField;
 - (id) accessibilityTitle;
 - (id) accessibilityDescription;
 - (id) accessibilityHelpText;
 - (^{CGPath=}) convertPathToScreenSpace:(^{Path=^{CGPath}})a ;
 - ({CGPoint=dd}) convertPointToScreenSpace:(^{FloatPoint=ff})a ;
 - (id) ariaLandmarkRoleDescription;
 - (id) accessibilityMathPostscriptPairs;
 - (id) accessibilityMathPrescriptPairs;


@end
