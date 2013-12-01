//
//  CardGameViewController.h
//  Matchismo
//
//  Created by Xiaoxuan Wang on 13/11/13.
//  Copyright (c) 2013 brandsfever. All rights reserved.
//
//Abstract class. Must implement methods as described below.

#import <UIKit/UIKit.h>
#import "Deck.h"

@interface CardGameViewController : UIViewController

// protected
// for subclasses
- (Deck *)createDeck; // abstract

@end
