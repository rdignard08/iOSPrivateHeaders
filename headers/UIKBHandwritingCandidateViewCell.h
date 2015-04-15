
@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {

    TIKeyboardCandidate* _candidate;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    UILabel* _label;
    UILabel* _secondaryLabel;
    UIKBThemedView* _themedView;
}
 + (double) widthForCandidate:(id)avisualStyling:({?=b6b1b1b8b16})b;
 + (id) labelFontForText:(id)a;
 + (id) secondaryLabelFont;

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) reloadData;
 - (void) setHighlighted:(BOOL)a ;
 - (void) setSelected:(BOOL)a ;
 - (void) setLabel:(id)a ;
 - (void) _setRenderConfig:(id)a ;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a ;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) setThemedView:(id)a ;
 - (id) themedView;
 - (void) updateLabels;
 - (id) secondaryLabel;
 - (void) setSecondaryLabel:(id)a ;
 - (void) updateThemedView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({UIEdgeInsets=dddd}) edgeInsets;
 - (id) candidate;
 - (id) label;
 - (void) setCandidate:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
