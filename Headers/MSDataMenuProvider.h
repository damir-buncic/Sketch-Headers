//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class MSDataSupplier, MSDataSupplierManager, NSString;

@interface MSDataMenuProvider : NSObject <NSMenuDelegate>
{
    MSDataSupplier *_lastDataSupplier;
    MSDataSupplierManager *_dataManager;
    id <MSDataMenuProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <MSDataMenuProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MSDataSupplierManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak MSDataSupplier *lastDataSupplier; // @synthesize lastDataSupplier=_lastDataSupplier;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)sortedMenuItems:(id)arg1;
- (id)dataSuppliersForDataType:(unsigned long long)arg1;
- (id)dataSupplierGroupsForDataSuppliers:(id)arg1;
- (id)menuItemForDataSupplier:(id)arg1 indentationLevel:(long long)arg2;
- (id)menuItemsInGroup:(id)arg1 forDataSuppliers:(id)arg2;
- (id)menuItemsForDataSuppliers:(id)arg1 indentationLevel:(long long)arg2;
- (id)menuItemsForGroups:(id)arg1 indentationLevel:(long long)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuItemAction:(id)arg1;
- (id)submenuInMenuItems:(id)arg1 forGroup:(id)arg2;
- (BOOL)addDataSuppliersForType:(unsigned long long)arg1 toMenu:(id)arg2 typeTitle:(id)arg3;
- (void)updateMenu:(id)arg1;
- (void)updateOverridesMenu:(id)arg1;
- (id)overridesMenu;
- (id)menu;
- (id)initWithDataManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

