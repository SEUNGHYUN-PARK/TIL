//
//  ViewController.swift
//  VisualBookManager
//
//  Created by 박승현 on 2018. 5. 22..
//  Copyright © 2018년 박승현. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    //링킹을 잘해줘야한다. Main.storyboard에서 끌어다써야함.
    
    var myBookManager = BookManager()
    @IBOutlet weak var outputTextView: UITextView!
    @IBOutlet weak var nameTextField: UITextField!
    @IBOutlet weak var authorTextField: UITextField!
    @IBOutlet weak var genreTextField: UITextField!
    @IBOutlet weak var countLabel: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        let book1 = Book(name: "햄릿", genre: "비극", author: "셰익스피어")
        let book2 = Book(name: "누구를 위하여 종을 울리나", genre: "전쟁소설", author: "헤밍웨이")
        let book3 = Book(name: "죄와벌", genre: "사실주의", author: "톨스토이")
        
        myBookManager.registerBook(bookObject: book1)
        myBookManager.registerBook(bookObject: book2)
        myBookManager.registerBook(bookObject: book3)
        countLabel.text = "\(myBookManager.countBooks())"
    }

    @IBAction func registerAction(_sender: Any)
    {
        var bookTemp = Book()
        
        bookTemp.name = nameTextField.text!
        bookTemp.author = authorTextField.text!
        bookTemp.genre = genreTextField.text!

        myBookManager.registerBook(bookObject: bookTemp)
        outputTextView.text = "\(nameTextField.text!) has been registered."
        countLabel.text = "\(myBookManager.countBooks())"
    }
    @IBAction func searchAction(_sender: Any)
    {
        let resultbook = myBookManager.searchBook(name: nameTextField.text!)
        if resultbook != nil
        {
            outputTextView.text = resultbook
        }
        else
        {
            outputTextView.text = "We don't have book that you search. ^^"
        }
    }
    @IBAction func removeAction(_sender: Any)
    {
        myBookManager.removeBook(name: nameTextField.text!)
        outputTextView.text="\(nameTextField.text!) removed!"
        countLabel.text = "\(myBookManager.countBooks())"
    }
    @IBAction func  showAllBookAction(_sender: Any)
    {
        //print("Hello world!")
        outputTextView.text = myBookManager.showAllBooks()
        
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}
