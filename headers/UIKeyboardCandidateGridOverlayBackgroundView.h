
@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView {

    double _rowHeight;
    unsigned long long _highlightedRowIndex;
}
 + (id) reuseIdentifier;
 + (id) collectionViewKind;
 + (^{CGColor=}) backgroundColor;

 - (void) setRowHeight:(double)a;
 - (double) rowHeight;
 - (void) setHighlightedRowIndex:(unsigned long long)a;
 - (void) applyLayoutAttributes:(id)a;
 - (unsigned long long) highlightedRowIndex;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
