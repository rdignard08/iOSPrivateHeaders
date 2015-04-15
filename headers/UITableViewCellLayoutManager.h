
@interface UITableViewCellLayoutManager : NSObject {

}
 + (id) _alternateUISwitchableSelectorPairs;
 + (id) layoutManagerForTableViewCellStyle:(long long)a;
 + (id) _externalTextColor;
 + (id) _alternateExternalTextColor;
 + (id) _externalDetailTextColor;
 + (id) _alternateExternalDetailTextColor;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForCell:(id)a forState:(unsigned long long)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backgroundEndingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - (void) layoutSubviewsOfCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForCell:(id)a forState:(unsigned long long)b rowWidth:(double)c ;
 - (id) textLabelForCell:(id)a ;
 - (id) detailTextLabelForCell:(id)a ;
 - (id) editableTextFieldForCell:(id)a ;
 - (id) imageViewForCell:(id)a ;
 - (id) badgeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentEndingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - (void) cell:(id)a willTransitionToState:(unsigned long long)b ;
 - (void) cell:(id)a didTransitionToState:(unsigned long long)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectedBackgroundEndingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backgroundStartingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - ({CGSize=dd}) intrinsicContentSizeForCell:(id)a rowWidth:(double)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundRectForCell:(id)a forIndentedState:(BOOL)b rowWidth:(double)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundRectForCell:(id)a forIndentedState:(BOOL)b rowWidth:(double)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundContentRectForCell:(id)a forIndentedState:(BOOL)b rowWidth:(double)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundRectForCell:(id)a forIndentedState:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedBackgroundContentRectForCell:(id)a forIndentedState:(BOOL)b ;
 - (BOOL) accessoryShouldAppearForCell:(id)a ;
 - (BOOL) editingAccessoryShouldAppearForCell:(id)a ;
 - (BOOL) reorderSeparatorShouldAppearForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _reorderSeparatorRectForCell:(id)a offscreen:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _reorderControlRectForCell:(id)a offscreen:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editingAccessoryRectForCell:(id)a offscreen:(BOOL)b ;
 - (BOOL) reorderControlShouldAppearForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _accessoryRectForCell:(id)a offscreen:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCell:(id)a forEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c rowWidth:(double)d ;
 - (BOOL) editControlShouldAppearForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editControlRectForCell:(id)a offscreen:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) deleteConfirmationRectForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundRectForCell:(id)a forIndentedState:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForCell:(id)a forEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - (double) defaultTextLabelFontSizeForCell:(id)a ;
 - (id) defaultTextLabelFontForCell:(id)a ;
 - (id) defaultLabelForCell:(id)a ofClass:(Class)b ;
 - (id) defaultImageViewForCell:(id)a ;
 - (id) defaultLabelForCell:(id)a ;
 - (id) defaultBadgeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editControlEndingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - (BOOL) editControlShouldFadeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderControlEndingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - (BOOL) reorderControlShouldFadeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderSeparatorEndingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - (BOOL) reorderSeparatorShouldFadeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessoryEndingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - (BOOL) accessoryShouldFadeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingAccessoryEndingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - (BOOL) editingAccessoryShouldFadeForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentEndingRectForCell:(id)a forDisplayOfDeleteConfirmation:(BOOL)b ;
 - (double) contentIndentationForCell:(id)a ;
 - (void) getTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})a detailTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b forCell:(id)c rowWidth:(double)d ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editControlStartingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderControlStartingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderSeparatorStartingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessoryStartingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingAccessoryStartingRectForCell:(id)a forNewEditingState:(BOOL)b showingDeleteConfirmation:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentStartingRectForCell:(id)a forDisplayOfDeleteConfirmation:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentStartingRectForCell:(id)a forNewEditingState:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForCell:(id)a rowWidth:(double)b ;
 - (double) defaultDetailTextLabelFontSizeForCell:(id)a ;
 - (id) defaultDetailTextLabelFontForCell:(id)a ;
 - (id) defaultEditableTextFieldForCell:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForCell:(id)a ;


@end
