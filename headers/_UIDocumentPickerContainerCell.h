
@interface _UIDocumentPickerContainerCell : _UIDocumentPickerCell {

    _UIDocumentPickerContainerItem* _item;
    NSString* _containerDisplayName;
    UIImageView* _containerIconView;
    id _observerToken;
    NSLayoutConstraint* _containerIconWidthConstraint;
    NSLayoutConstraint* _containerIconHeightConstraint;
    NSLayoutConstraint* _containerIconBottomConstraint;
}

 - (void) setItem:(id)a ;
 - (id) item;
 - (void) dealloc;
 - (void) traitCollectionDidChange:(id)a ;
 - (void) prepareForReuse;
 - (void) _showPickableDiagnostic;
 - (id) viewControllerForDisplay;
 - (void) reloadItem:(BOOL)a ;
 - (id) containerIconView;
 - (void) containersChangedWithSnapshot:(id)a differences:(id)b ;
 - (void) setContainerIconView:(id)a ;
 - (void) setContainerIconBottomConstraint:(id)a ;
 - (id) containerIconBottomConstraint;
 - (void) setContainerIconWidthConstraint:(id)a ;
 - (void) setContainerIconHeightConstraint:(id)a ;
 - (id) containerIconWidthConstraint;
 - (id) containerIconHeightConstraint;
 - (void) updateSubtitle;
 - (void) setObserverToken:(id)a ;
 - (void) setContainerDisplayName:(id)a ;
 - (id) containerDisplayName;
 - (id) observerToken;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
