using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Final_Rasp
{
    public partial class SmartTrash : Form
    {
        public SmartTrash()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void toolTip1_Popup(object sender, PopupEventArgs e)
        {

        }
        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            if (q1c2.Checked == true)
            {
                MessageBox.Show("You are Right!");
            }
            else if (q1c1.Checked == true)
            {
                MessageBox.Show("You are Wrong");
            }
            else if (q1c3.Checked == true)
            {
                MessageBox.Show("You are Wrong");
            }
            
        }
