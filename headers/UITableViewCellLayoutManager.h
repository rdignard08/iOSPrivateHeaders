
@interface UITableViewCellLayoutManager : NSObject {

}
 + (id) _alternateUISwitchableSelectorPairs;
 + (id) layoutManagerForTableViewCellStyle:(long long)a;
 + (id) _externalTextColor;
 + (id) _alternateExternalTextColor;
 + (id) _externalDetailTextColor;
 + (id) _alternateExternalDetailTextColor;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForCell:(id)aforState:(unsigned long long)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backgroundEndingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - (void) layoutSubviewsOfCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForCell:(id)aforState:(unsigned long long)browWidth:(double)c;
 - (id) textLabelForCell:(id)a;
 - (id) detailTextLabelForCell:(id)a;
 - (id) editableTextFieldForCell:(id)a;
 - (id) imageViewForCell:(id)a;
 - (id) badgeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentEndingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - (void) cell:(id)awillTransitionToState:(unsigned long long)b;
 - (void) cell:(id)adidTransitionToState:(unsigned long long)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectedBackgroundEndingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backgroundStartingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - ({CGSize=dd}) intrinsicContentSizeForCell:(id)arowWidth:(double)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundRectForCell:(id)aforIndentedState:(BOOL)browWidth:(double)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundRectForCell:(id)aforIndentedState:(BOOL)browWidth:(double)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundContentRectForCell:(id)aforIndentedState:(BOOL)browWidth:(double)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundRectForCell:(id)aforIndentedState:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundContentRectForCell:(id)aforIndentedState:(BOOL)b;
 - (BOOL) accessoryShouldAppearForCell:(id)a;
 - (BOOL) editingAccessoryShouldAppearForCell:(id)a;
 - (BOOL) reorderSeparatorShouldAppearForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _reorderSeparatorRectForCell:(id)aoffscreen:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _reorderControlRectForCell:(id)aoffscreen:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editingAccessoryRectForCell:(id)aoffscreen:(BOOL)b;
 - (BOOL) reorderControlShouldAppearForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _accessoryRectForCell:(id)aoffscreen:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCell:(id)aforEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)crowWidth:(double)d;
 - (BOOL) editControlShouldAppearForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editControlRectForCell:(id)aoffscreen:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) deleteConfirmationRectForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundRectForCell:(id)aforIndentedState:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCell:(id)aforEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - (double) defaultTextLabelFontSizeForCell:(id)a;
 - (id) defaultTextLabelFontForCell:(id)a;
 - (id) defaultLabelForCell:(id)aofClass:(Class)b;
 - (id) defaultImageViewForCell:(id)a;
 - (id) defaultLabelForCell:(id)a;
 - (id) defaultBadgeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editControlEndingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - (BOOL) editControlShouldFadeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderControlEndingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - (BOOL) reorderControlShouldFadeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderSeparatorEndingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - (BOOL) reorderSeparatorShouldFadeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessoryEndingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - (BOOL) accessoryShouldFadeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingAccessoryEndingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - (BOOL) editingAccessoryShouldFadeForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentEndingRectForCell:(id)aforDisplayOfDeleteConfirmation:(BOOL)b;
 - (double) contentIndentationForCell:(id)a;
 - (void) getTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})adetailTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bforCell:(id)crowWidth:(double)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editControlStartingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderControlStartingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderSeparatorStartingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessoryStartingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingAccessoryStartingRectForCell:(id)aforNewEditingState:(BOOL)bshowingDeleteConfirmation:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentStartingRectForCell:(id)aforDisplayOfDeleteConfirmation:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentStartingRectForCell:(id)aforNewEditingState:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForCell:(id)arowWidth:(double)b;
 - (double) defaultDetailTextLabelFontSizeForCell:(id)a;
 - (id) defaultDetailTextLabelFontForCell:(id)a;
 - (id) defaultEditableTextFieldForCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForCell:(id)a;


@end
