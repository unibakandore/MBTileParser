//
//  MBDialogTree.h
//  TileParser
//
//  Created by Moshe Berman on 9/23/12.
//
//
//  The MBDialogTreeNode is a data model class which holds
//  information for a screenful of dialog and associated objects.
//

#import <Foundation/Foundation.h>

@interface MBDialogTreeNode : NSObject

//
//  The delegate who will execute the endAction if necessary.
//

//@property (nonatomic, assign) id<MBDialogTreeDelegate> delegate;

//
//  An array of NSStrings. The strings are displayed by the MBDialogView
//  class. Each string is broken up to fit in the MBDialogView. You can
//  force a break by seperating strings into different items in the array.
//

@property (nonatomic, strong) NSArray *dialog;

//
//  The action to run after the dialog is all displayed, unless
//  there's no dialog. In that case the end action is ignored.
//

@property (nonatomic, assign) SEL endAction;

//
//  Arbitrary data, such as quantites, or item prices.
//

@property (nonatomic, strong) NSDictionary *payload;

//
//  The responses to the dialog. Valid responses values include
//  other DialogTreeNode objects and display names for them.
//

@property (nonatomic, strong) NSDictionary *responses;

//
//  Determines if there's another string to display.
//

- (BOOL) hasNext;

//
//  Returns the next portion of dialog to be displayed.
//

- (NSString *) nextStringToDisplay;

@end
