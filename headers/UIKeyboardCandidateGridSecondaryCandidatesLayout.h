
@interface UIKeyboardCandidateGridSecondaryCandidatesLayout : UICollectionViewFlowLayout {

    int _candidatesVisualStyle;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
}
 + (Class) layoutAttributesClass;

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) setCandidatesVisualStyle:(int)a;
 - (int) candidatesVisualStyle;
 - (void) updateAttributes:(id)a;


@end
