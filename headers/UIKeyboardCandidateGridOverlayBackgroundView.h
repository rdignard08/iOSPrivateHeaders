
@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView {

    d _rowHeight;
    Q _highlightedRowIndex;
}
 + (id) reuseIdentifier;
 + (id) collectionViewKind;
 + (^{CGColor=}) backgroundColor;

 - (void) setRowHeight:(d)a;
 - (d) rowHeight;
 - (void) setHighlightedRowIndex:(Q)a;
 - (void) applyLayoutAttributes:(id)a;
 - (Q) highlightedRowIndex;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
