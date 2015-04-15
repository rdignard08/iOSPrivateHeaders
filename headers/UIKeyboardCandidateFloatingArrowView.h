
@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {

    UIButton* _arrowButton;
}
 + (id) reuseIdentifier;
 + (id) collectionViewKind;

 - (void) dealloc;
 - (void) prepareForReuse;
 - (id) arrowButton;
 - (void) applyLayoutAttributes:(id)a;
 - (void) updateArrow;
 - (void) setArrowButton:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
