
@protocol NSCopying;
@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

    BOOL _beginsFirstPage;
    BOOL _endsLastPage;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) setBeginsFirstPage:(BOOL)a ;
 - (void) setEndsLastPage:(BOOL)a ;
 - (BOOL) beginsFirstPage;
 - (BOOL) endsLastPage;


@end
